// Address: 00417acc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00417acc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) &&
     (puVar1 = *(undefined4 **)(param_1 + (uint)*(byte *)(param_1 + 1) + 6),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  return uVar2;
}

