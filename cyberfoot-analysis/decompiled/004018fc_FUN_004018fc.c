// Address: 004018fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004018fc(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_18 [2];
  
  uVar2 = param_1 + 0x3fffU & 0xffffc000;
  puVar1 = DAT_0066c5fc;
  do {
    for (; (undefined4 **)puVar1 != &DAT_0066c5fc; puVar1 = (undefined4 *)*puVar1) {
      if ((int)uVar2 <= (int)puVar1[3]) {
        FUN_004017e8(puVar1[2],uVar2,param_2);
        if (*param_2 == 0) {
          return;
        }
        puVar1[2] = puVar1[2] + param_2[1];
        puVar1[3] = puVar1[3] - param_2[1];
        if (puVar1[3] != 0) {
          return;
        }
        FUN_00401538(puVar1);
        return;
      }
    }
    FUN_00401654(uVar2,param_2);
    if (*param_2 == 0) {
      return;
    }
    FUN_00401550(&DAT_0066c5fc,param_2,local_18);
    puVar1 = DAT_0066c5fc;
  } while (local_18[0] != 0);
  FUN_00401730(*param_2,param_2[1],local_18);
  *param_2 = 0;
  return;
}

