import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.util.*

fun main() {
    val n = readln().toInt()
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val stack = Stack<Int>()

    for (i in 0 until n) {
        val tokenizer = StringTokenizer(br.readLine())
        val c = tokenizer.nextToken().toInt()

        if (c == 1) {
            stack.push(tokenizer.nextToken().toInt())
        } else if (c == 2) {
            if(stack.isEmpty()) bw.write("-1\n")
            else bw.write(stack.pop().toString() +"\n")
        } else if (c == 3) {
            bw.write(stack.size.toString()+ "\n")
        } else if (c == 4) {
            if(stack.isEmpty()) bw.write("1\n")
            else bw.write("0\n")
        } else if (c == 5) {
            if(stack.isEmpty()) bw.write("-1\n")
            else bw.write(stack.peek().toString() +"\n")
        }
    }

    bw.flush()
    bw.close()
}