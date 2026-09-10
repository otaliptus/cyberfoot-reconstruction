// Address: 0040ade4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040ade4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    param_1 = 0;
  }
  else {
    uVar1 = FUN_0040a760(param_2);
    iVar2 = FUN_0040aa6c(param_1,0x7fffffff,param_2,param_4,param_3,uVar1);
    *(undefined1 *)(param_1 + iVar2) = 0;
  }
  return param_1;
}

