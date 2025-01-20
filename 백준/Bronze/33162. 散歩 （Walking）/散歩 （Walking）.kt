import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val x = nextInt()
    var s = 0
    for(i in 1 .. x) {
        if(i%2 == 1) s+=3
        else s-=2
    }
    print(s)
}