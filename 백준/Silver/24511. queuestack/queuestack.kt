import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.util.*
import kotlin.collections.ArrayDeque

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))
    val dq = ArrayDeque<Int>()

    var token = StringTokenizer(br.readLine())
    val n = token.nextToken().toInt()

    token = StringTokenizer(br.readLine())
    val t = Array(n) {
        token.nextToken().toInt()
    }

    token = StringTokenizer(br.readLine())
    for(i in 0 until n) {
        if(t[i] == 0) dq.addFirst(token.nextToken().toInt())
        else token.nextToken()
    }

    token = StringTokenizer(br.readLine())
    val m = token.nextToken().toInt()
    token = StringTokenizer(br.readLine())

    for(i in 0 until m) {
        dq.addLast(token.nextToken().toInt())
    }

    for(i in 0 until m) {
        bw.write("${dq.removeFirst()} ")
    }

    bw.flush()
    bw.close()
}