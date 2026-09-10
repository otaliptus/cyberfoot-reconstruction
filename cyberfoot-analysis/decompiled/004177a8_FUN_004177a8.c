// Address: 004177a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004177a8(undefined2 *param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_8 [4];
  undefined1 local_4 [4];
  
  if (param_2 != '\0') {
    uVar1 = FUN_004175e4(param_1,auStack_8,local_4);
    return uVar1;
  }
  uVar2 = CONCAT22((short)((uint)param_1 >> 0x10),*param_1) & 0xffff2000;
  return CONCAT31((int3)(uVar2 >> 8),(short)uVar2 == 0x2000);
}

