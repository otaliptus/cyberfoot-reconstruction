// Address: 0061078c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061078c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*(int *)(*(int *)(DAT_006d4764 + param_4 * 4) + 0x44) +
          *(int *)(*(int *)(DAT_006d4764 + param_4 * 4) + 0x4c)) -
          *(int *)(*(int *)(DAT_006d4764 + param_3 * 4) + 0x44);
  FUN_00466128((&DAT_006d453c)[param_2],CONCAT31((int3)((uint)DAT_006d4764 >> 8),1));
  FUN_004659e8((&DAT_006d453c)[param_2],iVar2 + 0x12);
  FUN_0046599c((&DAT_006d453c)[param_2],*(int *)(*(int *)(DAT_006d4764 + param_3 * 4) + 0x44) + -10)
  ;
  FUN_00466128(*(undefined4 *)(&DAT_006d455c + param_2 * 4),1);
  FUN_004659e8(*(undefined4 *)(&DAT_006d455c + param_2 * 4),iVar2 + 0x12);
  FUN_0046599c(*(undefined4 *)(&DAT_006d455c + param_2 * 4),
               *(int *)(*(int *)(DAT_006d4764 + param_3 * 4) + 0x44) + -10);
  cVar1 = FUN_0040a43c("img\\f03.png");
  if (cVar1 != '\0') {
    FUN_0042d6c0(*(undefined4 *)(*(int *)(&DAT_006d455c + param_2 * 4) + 0x168),"img\\f03.png");
  }
  return;
}

