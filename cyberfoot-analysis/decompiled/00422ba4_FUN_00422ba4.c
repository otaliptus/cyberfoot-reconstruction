// Address: 00422ba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422ba4(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  *param_2 = DAT_00422be0;
  bVar1 = FUN_00421f74(param_1);
  if ((bVar1 & 0xf0) == 0xf0) {
    bVar1 = FUN_004239d4(param_1);
    *param_2 = bVar1 & 0xf;
    if ((*param_2 & 2) != 0) {
      uVar2 = FUN_00422ae4(param_1);
      *param_3 = uVar2;
    }
  }
  return;
}

