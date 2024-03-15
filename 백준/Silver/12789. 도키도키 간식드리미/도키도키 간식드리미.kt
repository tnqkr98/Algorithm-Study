import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    val sa = Stack<Int>()
    val sb = Stack<Int>()

    var c = 1

    val arr = Array(n) { nextInt() }
    arr.reverse()
    arr.forEach {
        sa.push(it)
    }

    while (true) {
        if (sa.isNotEmpty() && c == sa.peek()) {
            sa.pop()
            c += 1
        } else if (sb.isNotEmpty() && c == sb.peek()) {
            sb.pop()
            c += 1
        } else if (sa.isNotEmpty()) {
            sb.push(sa.pop())
        } else {
            break
        }
    }

    if (c == n + 1) print("Nice")
    else print("Sad")
}