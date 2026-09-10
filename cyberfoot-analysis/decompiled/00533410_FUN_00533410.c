// Address: 00533410
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00533410(int *param_1,int param_2)

{
  char cVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0046bca4(param_1,param_2);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    FUN_004070b8((int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10),local_14);
    FUN_00465d4c(param_1,local_14,&local_c);
    cVar1 = (**(code **)(*param_1 + 0xd4))(param_1,&local_c);
    if (((cVar1 != '\0') && (*(int *)(param_2 + 0xc) == 1)) &&
       (*(char *)((int)param_1 + 0x261) != '\0')) {
      FUN_00403c80(param_1,DAT_00533490,local_c,local_8);
      *(undefined4 *)(param_2 + 0xc) = 2;
    }
  }
  return;
}

