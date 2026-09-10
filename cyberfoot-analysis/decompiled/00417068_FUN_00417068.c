// Address: 00417068
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00417068(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if ((uVar1 < 0x10f) && (uVar2 < 0x10f)) {
    FUN_00416abc();
    return;
  }
  if (uVar1 == 0x400c) {
    FUN_00417068(*(undefined4 *)(param_1 + 4));
  }
  else if (uVar2 == 0x400c) {
    FUN_00417068(param_1,*(undefined4 *)(param_2 + 4));
  }
  else if (((uVar1 & 0xfff) < 0x10f) && ((uVar2 & 0xfff) < 0x10f)) {
    FUN_00416abc();
  }
  else {
    FUN_00416c48();
  }
  return;
}

