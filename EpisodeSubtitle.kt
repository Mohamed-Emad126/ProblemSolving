import java.io.File
import java.util.*

fun main() {
    //test path
    //D:\SERIES\The Simpsons Season 3 (Complete S03 Remastered HQ 720p x265 HappyLee)
    
    val scanner = Scanner(System.`in`)
    print("Enter the path of the series Directory: ")
    val baseDir = scanner.nextLine()
    print("Enter Season Number: ")
    val seasonNum = scanner.nextInt()
    print("Enter Number of Episodes: ")
    val episodesNum = scanner.nextInt()

    val folder = File(baseDir)

    val filesAsList: MutableList<File>? = folder.listFiles()?.toMutableList()
    val numOfFiles = folder.listFiles()?.size
    var numOfCompleted = 0
    var episode: File?
    var subtitle: File?

    if (numOfFiles?.div(2) != episodesNum || numOfFiles % 2 != 0) {
        println("Number of subtitles don't match number of episodes, Please check your directory and try again!")
        return
    }

    while (numOfCompleted != numOfFiles.div(2)) {
        println(numOfCompleted + 1)

        episode = findly(filesAsList, seasonNum, numOfCompleted)
        subtitle = findly(filesAsList, seasonNum, numOfCompleted)

        val episodeWithSub = File("$baseDir\\S${String.format("%02d", seasonNum)}E${String.format("%02d", numOfCompleted + 1)}")
        episodeWithSub.mkdir()

        episode?.renameTo(File(episodeWithSub.path, "${episode.nameWithoutExtension}.${episode.extension}"))
        subtitle?.renameTo(File(episodeWithSub.path, "${episode?.nameWithoutExtension}.${subtitle.extension}"))

        numOfCompleted++

    }
    println("Completed...")

}

fun findly(filesAsList: MutableList<File>?, seasonNum: Int, numOfCompleted: Int): File? {
    var episode: File? = null
    for (i in filesAsList?.indices!!) {
        if (filesAsList[i].name.contains("S${String.format("%02d", seasonNum)}E${String.format("%02d", numOfCompleted + 1)}")) {
            episode = filesAsList[i]
            //print("${filesAsList[i].name} ")
            filesAsList.removeAt(i)
            return episode
        }
    }
    return episode
}
