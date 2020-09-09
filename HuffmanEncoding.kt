import java.io.File
import java.io.FileOutputStream
import java.util.*
import kotlin.collections.ArrayDeque
import kotlin.collections.HashMap

val decodeMap = HashMap<String, String>()
val codeMap = HashMap<String, String>()
val frequentMap = HashMap<Char, Int>()
val huffman = ArrayDeque<Pair<Float, String>>()
var compressionCode = ""


fun main() {
    //Test text File
    //C:\Users\MohammedEmadAbdelSam\Desktop\5.txt
    //C:\Users\MohammedEmadAbdelSam\Desktop\CO-5.ME
    val scanner = Scanner(System.`in`)
    print("Please, Enter the path of the text file you want to compress \n\"Enter the File name with its Extension\": ")
    val path = scanner.nextLine()
    val file = File(path)
    if (!file.exists()) {
        print("check the Entered path and try again!!")
        return
    }
    val bufferedReader = file.bufferedReader()
    val fileContent = bufferedReader.use { it.readText() }
    print("you want to (1/2):\n\t1-Compress\n\t2-Decompress\n-> ")
    when (scanner.nextInt()) {
        1 -> {
            constructHuffmanTree(fileContent)
            constructCompressionCode()
            val dataInHuffman = dataToHuffman(fileContent)
            val compressedData = fromHuffmanToChar(dataInHuffman)
            val fullCompressedData = compressionCode + compressedData

            val compressed = File(file.parent, "CO-${file.nameWithoutExtension}.ME")
            writeToFile(compressed, fullCompressedData)
        }
        2 -> {
            var codeLine = ""
            var startIndex = 0
            for (i in fileContent.indices) {
                if (fileContent[i] == 'e' && fileContent[i + 1] == '¹') {
                    startIndex = i + 3
                    break
                } else {
                    codeLine += fileContent[i]
                }
            }
            val codes = codeLine.split('¹')
            for (i in codes) {
                if (i.length > 2) {
                    decodeMap[i.substring(1, i.length)] = i[0].toString()
                }
            }

            val bytes = getDataInBits(startIndex, fileContent)

            val decompressedData = decompressedData(bytes)

            val compressed = File(file.parent, "DE-${file.nameWithoutExtension}.txt")

            writeToFile(compressed, decompressedData)
        }
        else -> {
            print("Wrong choice!!")
        }
    }

}
//Write the data in output file
private fun writeToFile(file: File, data: String) {
    if (file.exists()){
        file.delete()
    }
    FileOutputStream(file).use {
        it.write(data.toByteArray())
    }
}

// Decode Functions
private fun decompressedData(bytes: String): String {
    var key = ""
    var decompressedData = ""
    var readyToEnd = false
    var lastChar = ""
    for (i in bytes.indices) {
        if( i+8 == bytes.length-1){
            readyToEnd = true
        }
        key += bytes[i]
        println("Processing...")
        if (!decodeMap.containsKey(key)) {
            continue
        } else {
            if(readyToEnd){
                lastChar = decodeMap[key].toString()
                break
            }
            else{
                decompressedData += decodeMap[key]
                key = ""
            }
        }
    }
    return decompressedData+lastChar
}

private fun getDataInBits(startIndex: Int, fileContent: String): String {
    var bytes = ""
    var compressedData = ""
    for (i in startIndex until fileContent.length) {
        compressedData += fileContent[i]
    }

    for (i in compressedData.indices) {
        bytes += compressedData[i].toInt().toBinary(8)
    }
    return bytes
}


//Encode Functions
fun constructHuffmanTree(data: String) {

    for (element: Char in data) {
        if (frequentMap[element] == null) {
            frequentMap[element] = 1
        } else {
            frequentMap.computeIfPresent(element) { _, v ->
                v + 1
            }
        }
    }

    var d: Float
    for (i in frequentMap) {
        d = frequentMap[i.key]?.toFloat()!!
        d /= data.length.toFloat()
        huffman.add(d to i.key.toString())
    }

    while (huffman.size > 1) {
        huffman.sortBy { pair -> pair.first }
        val k = huffman.first()
        huffman.removeFirst()
        val v = huffman.first()
        huffman.removeFirst()

        huffman.add(k.first + v.first to k.second + v.second)
        var c = '0'
        if (k.first > v.first) {
            c = '1'
        }
        for (i in k.second.indices) {
            codeMap[k.second[i].toString()] = c + codeMap.getOrDefault(k.second[i].toString(), "")
        }
        c = if (v.first >= k.first) {
            '1'
        } else {
            '0'
        }
        for (i in v.second.indices) {
            codeMap[v.second[i].toString()] = c + codeMap.getOrDefault(v.second[i].toString(), "")
        }
    }
    huffman.clear()
}

fun constructCompressionCode() {
    for (i in codeMap) {
        var s = ""
        s += i.key
        compressionCode += s + "" + i.value + "¹"
    }
    compressionCode += "e¹\n"
}

fun dataToHuffman(data: String): String {
    var encodedData = ""
    println(data.length)
    for (i in data.indices) {
        println("Progress $i")
        encodedData += codeMap[data[i].toString()]
    }
    return encodedData
}

fun fromHuffmanToChar(dataInHuffman: String): String {
    var newData = ""
    for (i in dataInHuffman.indices step 8) {
        var subSequence: String
        subSequence = if (i + 8 >= dataInHuffman.length) {
            dataInHuffman.subSequence(i, dataInHuffman.length).toString()
        } else {
            dataInHuffman.subSequence(i, i + 8).toString()
        }

        if (subSequence.length < 8) {
            var x = subSequence
            for (j in subSequence.length until 8) {
                x = "${x}0"
            }
            subSequence = x
        }

        newData += Integer.parseInt(subSequence, 2).toChar()
    }

    return newData
}

//Extension function
fun Int.toBinary(len: Int): String {
    return String.format("%" + len + "s", this.toString(2)).replace(" ".toRegex(), "0")
}