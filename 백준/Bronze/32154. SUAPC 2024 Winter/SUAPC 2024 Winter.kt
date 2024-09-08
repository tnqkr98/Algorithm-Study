import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    val arr = arrayOf(
        arrayOf('A','B','C','D','E','F','G','H','J','L','M'),
        arrayOf('A','C','E','F','G','H','I','L','M'),
        arrayOf('A','C','E','F','G','H','I','L','M'),
        arrayOf('A','B','C','E','F','G','H','L','M'),
        arrayOf('A','C','E','F','G','H','L','M'),
        arrayOf('A','C','E','F','G','H','L','M'),
        arrayOf('A','C','E','F','G','H','L','M'),
        arrayOf('A','C','E','F','G','H','L','M'),
        arrayOf('A','C','E','F','G','H','L','M'),
        arrayOf('A','B','C','F','G','H','L','M'),
    )
    val m = arr[n-1].size
    println(m)
    for(i in 0 until m) {
        print("${arr[n-1][i]} ")
    }
}