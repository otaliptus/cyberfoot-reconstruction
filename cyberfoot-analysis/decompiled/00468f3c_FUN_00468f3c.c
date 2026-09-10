// Address: 00468f3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00468f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1c;
  int local_18;
  char local_14;
  int local_c;
  int local_8;
  
  (**(code **)(**(int **)(param_4 + -0xc) + 8))();
  cVar4 = (char)param_1;
  if (((*(int *)(param_4 + -0x10) != 0) &&
      (((cVar4 == '\0' || (*(char *)(*(int *)(param_4 + -0x10) + 0x57) != '\0')) ||
       (((*(byte *)(*(int *)(param_4 + -0x10) + 0x1c) & 0x10) != 0 &&
        ((*(byte *)(*(int *)(param_4 + -0x10) + 0x51) & 4) == 0)))))) &&
     (cVar4 == *(char *)(*(int *)(param_4 + -0x10) + 0x5b))) {
    FUN_0041dec0(*(undefined4 *)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x10));
  }
  local_c = FUN_00469730(*(undefined4 *)(param_4 + -4));
  if (-1 < local_c + -1) {
    local_8 = 0;
    do {
      iVar2 = FUN_004696f4(*(undefined4 *)(param_4 + -4),local_8);
      if (((cVar4 == *(char *)(iVar2 + 0x5b)) &&
          ((((cVar4 == '\0' || (*(char *)(iVar2 + 0x57) != '\0')) ||
            (DAT_004690a8 == (DAT_004690a8 & *(uint *)(iVar2 + 0x50)))) ||
           (((*(byte *)(iVar2 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar2 + 0x51) & 4) == 0)))))) &&
         (iVar2 != *(int *)(param_4 + -0x10))) {
        for (iVar5 = 0; iVar5 < *(int *)(*(int *)(param_4 + -0xc) + 8); iVar5 = iVar5 + 1) {
          iVar6 = param_4;
          uVar3 = FUN_0041e01c(*(undefined4 *)(param_4 + -0xc),iVar5);
          cVar1 = FUN_00468a70(iVar2,uVar3,param_1,iVar6);
          if (cVar1 != '\0') break;
        }
        FUN_0041e098(*(undefined4 *)(param_4 + -0xc),iVar5,iVar2);
      }
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  local_c = *(int *)(*(int *)(param_4 + -0xc) + 8);
  if (-1 < local_c + -1) {
    local_8 = 0;
    do {
      local_1c = *(undefined4 *)(param_4 + -0xc);
      local_18 = local_8;
      iVar2 = param_4;
      local_14 = cVar4;
      uVar3 = FUN_0041e01c(*(undefined4 *)(param_4 + -0xc),local_8);
      FUN_00468afc(uVar3,param_1,&local_1c,iVar2);
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

