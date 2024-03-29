import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.util.*
import kotlin.collections.ArrayDeque

var visit: Array<Int> = arrayOf()
var adj: Array<ArrayList<Int>> = arrayOf()
var cnt = 1

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val t = StringTokenizer(br.readLine())
    val n = t.nextToken().toInt()
    val m = t.nextToken().toInt()
    val start = t.nextToken().toInt()

    adj = Array(n + 1) { arrayListOf() }
    visit = Array(n + 1) { 0 }

    for (i in 1..m) {
        val tt= StringTokenizer(br.readLine())
        val s = tt.nextToken().toInt()
        val e = tt.nextToken().toInt()
        adj[s].add(e)
        adj[e].add(s)
    }

    adj.forEach {
        it.sortDescending()
    }

    val q = ArrayDeque<Int>()

    q.addLast(start)
    while(q.isNotEmpty()) {
        val v = q.removeFirst()

        if(visit[v] != 0) continue

        visit[v] = cnt++
        adj[v].forEach {
            if(visit[it] == 0) {
                q.addLast(it)
            }
        }
    }

    for (i in 1..n) {
        bw.write("${visit[i]}\n")
    }

    bw.flush()
    bw.close()
}