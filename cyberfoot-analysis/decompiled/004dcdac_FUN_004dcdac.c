// Address: 004dcdac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 * FUN_004dcdac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_1c [16];
  
  FUN_004032a8(auStack_1c,0x10,0);
  uVar3 = 0;
  uVar1 = FUN_004dc5d8(param_1);
  uVar2 = (uint)(uVar1 | 0x560);
  FUN_004dcba4(param_1,param_2,param_3,uVar2,uVar3);
  return auStack_1c + -uVar2;
}

