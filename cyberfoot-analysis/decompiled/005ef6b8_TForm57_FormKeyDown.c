// Address: 005ef6b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm57_FormKeyDown(int param_1,undefined4 param_2,short *param_3,char param_4)

{
  if ((DAT_005ef704 == param_4) && (*param_3 == 0x73)) {
    *param_3 = 0;
  }
  if (*param_3 == 0xd) {
    TForm57_XiButton2Click(param_1,*(undefined4 *)(param_1 + 0x310));
  }
  if (*param_3 == 0x1b) {
    TForm57_XiButton2Click(param_1,*(undefined4 *)(param_1 + 0x310));
  }
  return;
}

