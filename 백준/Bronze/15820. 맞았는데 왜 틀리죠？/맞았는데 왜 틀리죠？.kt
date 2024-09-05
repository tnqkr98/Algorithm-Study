import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val s1 = nextInt()
    val s2 = nextInt()

    var t = true
    var s = true

    for(i in 0 until s1) {
        val a = nextInt()
        val b = nextInt()
        if(a!=b) t =false
    }

    for(i in 0 until s2) {
        val a = nextInt()
        val b = nextInt()
        if(a!=b) s =false
    }

    if(s && t) {
        print("Accepted")
    } else if(!t) {
        print("Wrong Answer")
    } else {
        print("Why Wrong!!!")
    }
}