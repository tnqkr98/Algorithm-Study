import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.util.*
import kotlin.collections.ArrayDeque

fun main() {
    val n = readln().toInt()
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))
    
    val deque = ArrayDeque<Int>()

    for (i in 0 until n) {
        val tokenizer = StringTokenizer(br.readLine())
        val c = tokenizer.nextToken().toInt()

        if (c == 1) {
            deque.addFirst(tokenizer.nextToken().toInt())
        } else if (c == 2) {
            deque.addLast(tokenizer.nextToken().toInt())
        } else if (c == 3) {
            bw.write((deque.removeFirstOrNull() ?: -1).toString()+ "\n")
        } else if (c == 4) {
            bw.write((deque.removeLastOrNull() ?: -1).toString()+ "\n")
        } else if (c == 5) {
            bw.write(deque.size.toString() + "\n")
        } else if (c == 6) {
            if (deque.isEmpty()) bw.write("1\n")
            else bw.write("0\n")
        } else if (c == 7) {
            bw.write((deque.firstOrNull() ?: -1).toString() + "\n")
        } else if (c == 8) {
            bw.write((deque.lastOrNull() ?: -1).toString() + "\n")
        }
    }

    bw.flush()
    bw.close()
}