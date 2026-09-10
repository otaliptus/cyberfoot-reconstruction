// Address: 0040198c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040198c(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_20;
  undefined4 local_1c;
  int local_18 [2];
  
  uVar2 = param_2 + 0x3fffU & 0xffffc000;
  puVar1 = DAT_0066c5fc;
LAB_004019b2:
  do {
    for (; ((undefined4 **)puVar1 != &DAT_0066c5fc && (param_1 != puVar1[2]));
        puVar1 = (undefined4 *)*puVar1) {
    }
    if (param_1 == puVar1[2]) {
      if ((int)uVar2 <= (int)puVar1[3]) goto LAB_00401a5f;
      FUN_004016b8(puVar1[2] + puVar1[3],uVar2 - puVar1[3],&local_20);
      if (local_20 != 0) {
        FUN_00401550(&DAT_0066c5fc,&local_20,local_18);
        puVar1 = DAT_0066c5fc;
        if (local_18[0] == 0) {
          FUN_00401730(local_20,local_1c,local_18);
          *param_3 = 0;
          return;
        }
        goto LAB_004019b2;
      }
    }
    FUN_004016b8(param_1,uVar2,&local_20);
    if (local_20 == 0) {
LAB_00401a5f:
      if ((param_1 != puVar1[2]) || ((int)puVar1[3] < (int)uVar2)) {
        *param_3 = 0;
        return;
      }
      FUN_004017e8(puVar1[2],uVar2,param_3);
      if (*param_3 == 0) {
        return;
      }
      puVar1[2] = puVar1[2] + param_3[1];
      puVar1[3] = puVar1[3] - param_3[1];
      if (puVar1[3] != 0) {
        return;
      }
      FUN_00401538(puVar1);
      return;
    }
    FUN_00401550(&DAT_0066c5fc,&local_20,local_18);
    puVar1 = DAT_0066c5fc;
    if (local_18[0] == 0) {
      FUN_00401730(local_20,local_1c,local_18);
      *param_3 = 0;
      return;
    }
  } while( true );
}

