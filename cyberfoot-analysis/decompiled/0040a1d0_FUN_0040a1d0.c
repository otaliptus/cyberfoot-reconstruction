// Address: 0040a1d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040a1d0(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  float10 local_14;
  undefined4 local_8;
  
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  uVar1 = FUN_0040bf28(param_1,&local_14);
  if ((char)uVar1 == '\0') {
    FUN_0040a0d0();
    uVar1 = FUN_00405ef4(DAT_0066c78c);
    uVar1 = FUN_0040a194(DAT_0066c78c,uVar1);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00405ef4(DAT_0066c790,uVar1,puVar2,&stack0xfffffffc);
      uVar1 = FUN_0040a194(DAT_0066c790,uVar1);
      if ((char)uVar1 != '\0') {
        *param_2 = 0;
      }
    }
    else {
      *param_2 = 1;
    }
  }
  else {
    *param_2 = local_14 != (float10)_DAT_0040a250;
  }
  return uVar1;
}

