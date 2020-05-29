import java.util.*
 
val set = mutableSetOf<Int>()
fun main() {
    val sc = Scanner(System.`in`)
 
    var t = sc.nextInt()
 
    while (t-- != 0){
        val n = sc.nextInt()
        val k = sc.nextInt()
 
        divisors(n)
 
        for(i in set){
            val v = i + k*i + (k*k*i) + (k*k*k*i)
            if( v == n){
                println("$i  ${k*i}  ${(k*k*i)}  ${(k*k*k*i)}")
                break
            }
        }
        set.clear()
    }
}
 
fun divisors(n: Int){
    var i = 1;
    while (i*i<=n){
        if(n%i == 0){
            set.add(i)
            set.add(n/i)
        }
        i++
    }
}
