package haxe.lang;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Enum
{
	public Enum(int index)
	{
		//line 220 "C:\\HaxeToolkit\\haxe\\std\\java\\internal\\HxObject.hx"
		this.index = index;
	}
	
	
	public final int index;
	
	public java.lang.String getTag()
	{
		//line 224 "C:\\HaxeToolkit\\haxe\\std\\java\\internal\\HxObject.hx"
		throw new haxe.exceptions.NotImplementedException(haxe.lang.Runtime.toString(null), ((haxe.Exception) (null) ), ((java.lang.Object) (new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"java.internal.HxEnum", "java/internal/HxObject.hx", "getTag"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (224) )) )})) ));
	}
	
	
	public haxe.root.Array<java.lang.Object> getParams()
	{
		//line 228 "C:\\HaxeToolkit\\haxe\\std\\java\\internal\\HxObject.hx"
		return new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
	}
	
	
	@Override public java.lang.String toString()
	{
		//line 232 "C:\\HaxeToolkit\\haxe\\std\\java\\internal\\HxObject.hx"
		return this.getTag();
	}
	
	
}


