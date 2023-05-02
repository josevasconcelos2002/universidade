public interface FazMetros {
    public int pontosPorMetro = 5;
    public default int getPontosPorMetro() {
        return pontosPorMetro;
    }
    double calculaPontos();
}