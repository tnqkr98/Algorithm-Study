import java.util.*

fun main() = with(Scanner(System.`in`)) {
    val (a,b,c,d) = nextLine().split(' ').map { it.toInt() }
    val (p,m,n) = nextLine().split(' ').map { it.toInt() }
    val dog = Array(2000) {0}
    for(i in 0 .. 1000 step a+b) {
        for(j in  i until i+a) {
            dog[j]++
        }
    }

    for(i in 0 .. 1000 step c+d) {
        for(j in  i until i+c) {
            dog[j]++
        }
    }
    print("${dog[p-1]} ${dog[m-1]} ${dog[n-1]}")
}