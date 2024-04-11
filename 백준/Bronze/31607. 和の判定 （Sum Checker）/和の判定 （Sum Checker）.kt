import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = Array(3) {
        nextInt()
    }
    arr.sort()
    if(arr[0] + arr[1] == arr[2]) print(1)
    else print(0)
}
