import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()
    var c = 0
    for(i in 1 .. a) {
        for(j in 1 .. b){
            if(i+j == 10) c++
        }
    }
    if(c == 1) {
        print("There is 1 way to get the sum 10.")
    } else {
        print("There are $c ways to get the sum 10.")
    }
}