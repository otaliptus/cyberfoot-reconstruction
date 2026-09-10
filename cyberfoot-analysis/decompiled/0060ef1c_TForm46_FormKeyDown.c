// Address: 0060ef1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm46_FormKeyDown(int param_1,undefined4 param_2,short *param_3,char param_4)

{
  char cVar1;
  
  if ((DAT_0060f0cc == param_4) && (*param_3 == 0x73)) {
    *param_3 = 0;
  }
  if ((((*param_3 == 0xd) || (*param_3 == 0x20)) && (0 < DAT_006d4494)) &&
     (DAT_006d4494 <= *(int *)PTR_DAT_0066aea4)) {
    *(int *)PTR_DAT_0066ad84 = DAT_006d4494;
    *(undefined4 *)PTR_DAT_0066b5ec = 1;
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + *(int *)PTR_DAT_0066ad84 * 0x1bc) *
                  0x2f8) != '\0') &&
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + *(int *)PTR_DAT_0066ad84 * 0x1bc) * 0x2f8)
        == '\0')) {
      *(undefined4 *)PTR_DAT_0066b5ec = 2;
    }
    FUN_0043b234(*(undefined4 *)(param_1 + 0x300),0);
    FUN_0043b234(DAT_006d4918,0);
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_006004f8,PTR_DAT_0066b090);
    (**(code **)(**(int **)PTR_DAT_0066b090 + 0xec))();
  }
  if (*param_3 == 0x70) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 3000;
  }
  if (*param_3 == 0x71) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 2000;
  }
  if (*param_3 == 0x72) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 600;
  }
  if (*param_3 == 0x73) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 300;
  }
  if (*param_3 == 0x74) {
    cVar1 = FUN_00651f8c();
    if (cVar1 != '\0') {
      *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 100;
    }
  }
  if (*param_3 == 0x75) {
    cVar1 = FUN_00651f8c();
    if (cVar1 != '\0') {
      *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 0x32;
    }
  }
  FUN_0043b244(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  return;
}

