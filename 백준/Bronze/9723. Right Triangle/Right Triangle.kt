import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val n = nextInt()
    for(i in 1 .. n) {
        val arr = Array(3) {
            nextInt()
        }
        arr.sort()
        if(arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2]) {
            println("Case #$i: YES")
        } else {
            println("Case #$i: NO")
        }
    }
}