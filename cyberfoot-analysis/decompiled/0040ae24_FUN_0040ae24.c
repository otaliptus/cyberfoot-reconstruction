// Address: 0040ae24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040ae24(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    param_1 = 0;
  }
  else {
    uVar1 = FUN_0040a760(param_3);
    iVar2 = FUN_0040aa6c(param_1,param_2,param_3,param_4,param_5,uVar1);
    *(undefined1 *)(param_1 + iVar2) = 0;
  }
  return param_1;
}

