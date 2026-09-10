// Address: 005d0bd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm75_FormKeyDown(undefined4 param_1,undefined4 param_2,short *param_3,char param_4)

{
  if ((DAT_005d0c2c == param_4) && (*param_3 == 0x73)) {
    *param_3 = 0;
  }
  if (*param_3 == 0x71) {
    FUN_0064af08();
  }
  if (*param_3 == 0x72) {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005a812c,PTR_DAT_0066b0b4);
    (**(code **)(**(int **)PTR_DAT_0066b0b4 + 0xec))();
  }
  return;
}

