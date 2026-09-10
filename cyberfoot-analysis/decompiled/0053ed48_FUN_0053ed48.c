// Address: 0053ed48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053ed48(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_00469730(*(int *)(param_1 + 0x30));
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        uVar3 = FUN_004696f4(*(undefined4 *)(param_1 + 0x30),iVar5);
        cVar1 = FUN_00403c10(uVar3,PTR_PTR_005354a4);
        if (cVar1 != '\0') {
          iVar4 = FUN_004696f4(*(undefined4 *)(param_1 + 0x30),iVar5);
          if ((param_1 != iVar4) && (*(char *)(iVar4 + 0x218) == *(char *)(param_1 + 0x218))) {
            FUN_0053edb0(iVar4,0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

