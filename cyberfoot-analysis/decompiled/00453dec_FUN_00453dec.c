// Address: 00453dec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00453dec(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x184) != 0) {
    uVar1 = FUN_0041e078(*(undefined4 *)(*(int *)(param_1 + 0x184) + 0x218),param_1);
    return uVar1;
  }
  return 0xffffffff;
}

