import java.util.*

fun main(arg: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    val k = nextInt()

    val ar = arrayListOf<Int>()
    repeat(n){
        ar.add(nextInt())
    }
    ar.sortDescending()
    println(ar[k-1])
}