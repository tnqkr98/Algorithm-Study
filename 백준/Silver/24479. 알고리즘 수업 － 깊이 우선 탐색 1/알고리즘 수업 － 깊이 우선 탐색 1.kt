import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.util.*

var visit: Array<Int> = arrayOf()
var adj: Array<ArrayList<Int>> = arrayOf()
var cnt = 1

fun dfs(next: Int) {
    visit[next] = cnt++
    adj[next].forEach {
        if (visit[it] == 0) {
            dfs(it)
        }
    }
}

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val t = StringTokenizer(br.readLine())
    val n = t.nextToken().toInt()
    val m = t.nextToken().toInt()
    val start = t.nextToken().toInt()

    adj = Array(n + 1) { arrayListOf() }
    visit = Array(n + 1) { 0 }

    for (i in 1 .. m) {
        val tokenizer = StringTokenizer(br.readLine())

        val s = tokenizer.nextToken().toInt()
        val e = tokenizer.nextToken().toInt()
        adj[s].add(e)
        adj[e].add(s)
    }

    adj.forEach {
        it.sort()
    }

    dfs(start)

    for (i in 1..n) {
        bw.write("${visit[i]}\n")
    }

    bw.flush()
    bw.close()
}