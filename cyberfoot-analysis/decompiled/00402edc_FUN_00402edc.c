// Address: 00402edc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00402edc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_004032a8(param_1,0x14c,0);
  *(int *)(param_1 + 0x14) = param_1 + 0x14c;
  *(undefined2 *)(param_1 + 4) = 0xd7b0;
  *(ushort *)(param_1 + 6) = (ushort)DAT_00662038;
  *(undefined4 *)(param_1 + 8) = 0x80;
  *(undefined1 **)(param_1 + 0x18) = &LAB_00402d30;
  uVar1 = FUN_00404ba4(param_2);
  uVar2 = FUN_00404da4(param_2);
  FUN_00402a04(uVar2,param_1 + 0x48,uVar1);
  iVar3 = FUN_00404ba4(param_2);
  *(undefined1 *)(param_1 + 0x48 + iVar3) = 0;
  return 0;
}

