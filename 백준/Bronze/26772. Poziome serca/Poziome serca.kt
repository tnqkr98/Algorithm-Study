import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.util.*

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val token = StringTokenizer(br.readLine())
    val n = token.nextToken().toInt()

    val arr = arrayOf(
        " @@@   @@@ ",
        "@   @ @   @",
        "@    @    @",
        "@         @",
        " @       @ ",
        "  @     @  ",
        "   @   @   ",
        "    @ @    ",
        "     @     ",
    )

    arr.forEachIndexed { idx, it ->
        for(i in 0 until n) {
            bw.write(it)
            if(i != n-1) bw.write(" ")
        }
        if (idx != arr.size -1) bw.write("\n")
    }

    bw.flush()
    bw.close()
}