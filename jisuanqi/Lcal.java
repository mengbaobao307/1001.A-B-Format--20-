package jisuan;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;
public class Lcal extends JFrame{
	private JTextField dataText1;
	private JTextField dataText2;
	private JTextField result;
	private JLabel label1;
	private JLabel label2;
	private JLabel label3;
	private JButton button;
	private JRadioButton radio1;
	private JRadioButton radio2;
	private JRadioButton radio3;
	private JRadioButton radio4;
	
	public  Lcal(){
		Dimension d = Toolkit.getDefaultToolkit().getScreenSize();
		int width=d.width;
		int height=d.height;
		setTitle("计算器");
		setLocation((width-300)/2,(height-300)/2);
		this.setSize(260,300);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		//this.setResizable(false);
		setVisible(true);
		
		dataText1=new JTextField();
		dataText2=new JTextField();
		result=new JTextField();
		label1=new JLabel("输入第一个数:");
		label2=new JLabel("输入第二个数:");
		label3=new JLabel("计算结果");
		button=new JButton("计算");
		radio1=new JRadioButton("+");
		radio2=new JRadioButton("-");
		radio3=new JRadioButton("*");
		radio4=new JRadioButton("/");
		
		JPanel p1=new JPanel(new GridLayout(1,2));
		p1.add(label1);
		p1.add(dataText1);
		
		JPanel p2=new JPanel(new GridLayout(1,4));
		p2.add(radio1);
		p2.add(radio2);
		p2.add(radio3);
		p2.add(radio4);
		
		JPanel p3=new JPanel(new GridLayout(1,2));
		p3.add(label2);
		p3.add(dataText2);
		
		JPanel p4=new JPanel(new GridLayout(1,2));
		p4.add(label3);
		p4.add(result);
		
		JPanel p5=new JPanel();
		p5.add(button);
		
		//加减乘除只能选一个
		ButtonGroup group=new ButtonGroup();
		group.add(radio1);
		group.add(radio2);
		group.add(radio3);
		group.add(radio4);
		
		this.setLayout(new GridLayout(5,1));
		
		this.add(p1);
		this.add(p2);
		this.add(p3);
		this.add(p4);
		this.add(p5);
		
		
		button.addActionListener(new ButtonListener());
	}
	class ButtonListener implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent arg0) {
			String data1=dataText1.getText();
			String data2=dataText2.getText();
			String option="";
			if(radio1.isSelected()){
				option=radio1.getText();
			}
			else if(radio2.isSelected()){
				option=radio2.getText();
			}
			else if(radio3.isSelected()){
				option=radio3.getText();
			}
			else if(radio4.isSelected()){
				option=radio4.getText();
			}
			//计算
			double d = calculate(data1,data2,option);
			//结果显示在结果文本
			result.setText(String.valueOf(d));
		}
	}
public double calculate(String data1,String data2,String option){
	double result=Double.MAX_VALUE;
	//将输入文本的数据转化为double型
	double d1=Double.parseDouble(data1);
	double d2=Double.parseDouble(data2);
	if(option=="+"){
		result=d1+d2;
	}
	else if(option=="-"){
		result=d1-d2;
	}
	else if(option=="*"){
		result=d1*d2;
	}
	else if(option=="/"){
		result=d1/d2;
	}
	return result;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Lcal frame = new Lcal();
	}
}
