package br.com.itau.conta;

public class ContaBancaria {
	
	private String titular;
	private double saldo;
	private String nuConta;
	private String data;
	
	public ContaBancaria(String titular, double saldo, String nuCota, String data) {
		super();
		this.titular = titular;
		this.saldo = saldo;
		this.nuConta = nuCota;
		this.data = data;
	}
	
	public void verificarsaldo() {
		System.out.println("titular: "+titular);
		System.out.println("Numero Conta: "+nuConta);
		System.out.println("Saldo: "+saldo);
		System.out.println("data: "+data);
	}
	
	public void depositar(double valor) {
		saldo+=valor;
		System.out.println("saldo atual: "+saldo);
	}
	
	public void sacar(double valor) {
		saldo-=valor;
		System.out.println("saldo atual, apos saque: "+valor);
	}

}
