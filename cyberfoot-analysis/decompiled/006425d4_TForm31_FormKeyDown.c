// Address: 006425d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm31_FormKeyDown(int param_1,undefined4 param_2,short *param_3,char param_4)

{
  if ((DAT_00642620 == param_4) && (*param_3 == 0x73)) {
    *param_3 = 0;
  }
  if (*param_3 == 0xd) {
    TForm31_XiButton2Click(param_1,*(undefined4 *)(param_1 + 0x318));
  }
  if (*param_3 == 0x1b) {
    TForm31_XiButton2Click(param_1,*(undefined4 *)(param_1 + 0x318));
  }
  return;
}

