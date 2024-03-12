import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val arr = Array(6) { nextInt() }
    for(x in -999 .. 999){
        for (y in -999 .. 999){
            if(arr[0]*x + arr[1]*y == arr[2] && arr[3]*x + arr[4]*y == arr[5]) {
                print("$x $y")
                return@with
            }
        }
    }
}