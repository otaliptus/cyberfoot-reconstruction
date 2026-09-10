// Address: 00487d60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487d60(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00484ee4(DAT_0066cbf8);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar4 = 0;
      uVar2 = FUN_00484ed0(DAT_0066cbf8,iVar3);
      FUN_004673cc(uVar2,param_2,0,uVar4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

