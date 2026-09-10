// Address: 0046dc4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046dc4c(undefined4 param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  
  iVar1 = FUN_0047e4c0();
  if (iVar1 == 0) {
    return;
  }
  if (param_2 != 9) {
    if (param_2 == 0x12) {
      uVar3 = 0;
      uVar2 = FUN_00408014(2,CONCAT22(extraout_var,2));
      FUN_004673cc(iVar1,0x127,uVar2,uVar3);
      return;
    }
    if (3 < (ushort)(param_2 - 0x25U)) {
      return;
    }
  }
  uVar3 = 0;
  uVar2 = FUN_00408014(2,CONCAT22(extraout_var,1));
  FUN_004673cc(iVar1,0x127,uVar2,uVar3);
  return;
}

