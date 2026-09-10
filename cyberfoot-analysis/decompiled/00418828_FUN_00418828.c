// Address: 00418828
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00418828(int param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  *param_4 = uVar1;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),uVar1) >> 8),1);
}

