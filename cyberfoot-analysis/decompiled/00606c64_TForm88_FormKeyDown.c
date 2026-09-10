// Address: 00606c64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_FormKeyDown(int param_1,undefined4 param_2,short *param_3,char param_4)

{
  if ((DAT_00606ca8 == param_4) && (*param_3 == 0x73)) {
    *param_3 = 0;
  }
  if (((*param_3 == 0xd) || (*param_3 == 0x20)) || (*param_3 == 0x1b)) {
    TForm88_bt_irprojogoClick(param_1,*(undefined4 *)(param_1 + 900));
  }
  return;
}

