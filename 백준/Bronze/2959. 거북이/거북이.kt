import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val a = Array(4) {
        nextInt()
    }

    a.sort()
    if (a[3] == a[0]) {
        print(a[3] * a[0])
    } else if (a[2] != a[3]) {
        print(a[2] * a[0])
    } else {
        if(a[1] == a[0])
            print(a[3] * a[0])
        else
            print(a[1] * a[0])
    }
}