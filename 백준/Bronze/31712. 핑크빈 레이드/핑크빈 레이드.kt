import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val arr = Array(3) {
        val t = nextInt()
        val d = nextInt()
        Pair(t, d)
    }

    var h = nextInt()
    var time = 0
    h -= (arr[0].second + arr[1].second + arr[2].second)
    while (h > 0) {
        time++
        if(time % arr[0].first == 0) h-=arr[0].second
        if(time % arr[1].first == 0) h-=arr[1].second
        if(time % arr[2].first == 0) h-=arr[2].second
    }
    print(time)
}