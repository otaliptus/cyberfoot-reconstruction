// Address: 00622bd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00622bd4(int param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puVar1 = PTR_DAT_0066ac78;
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00622e3a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0043b234(DAT_006d4918,0);
  FUN_00642c50(0x1fc,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_8);
  if ((*(int *)(puVar1 + 0x188) == 6) && (*(int *)(puVar1 + 0x184) == 2)) {
    iVar5 = *(int *)PTR_DAT_0066b09c;
    *(undefined4 *)(PTR_DAT_0066ae98 + iVar5 * 0x568 + 0x514) =
         *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x208);
    *(undefined4 *)(PTR_DAT_0066ae98 + iVar5 * 0x568 + 0x518) =
         *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x204);
  }
  else if ((*(int *)(puVar1 + 0x188) == 7) && (*(int *)(puVar1 + 0x184) == 2)) {
    iVar5 = *(int *)PTR_DAT_0066b09c;
    *(undefined4 *)(PTR_DAT_0066ae98 + iVar5 * 0x568 + 0x51c) =
         *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x204);
    *(undefined4 *)(PTR_DAT_0066ae98 + iVar5 * 0x568 + 0x520) =
         *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x208);
  }
  iVar5 = 0;
  pcVar4 = PTR_DAT_0066ae98 + 0x52d;
  do {
    if (((*pcVar4 != '\0') && (pcVar4[1] == '\0')) && (pcVar4[2] == '\0')) {
      if (pcVar4[-1] == '\0') {
        *(int *)PTR_DAT_0066b09c = iVar5;
        FUN_00622e5c(param_1);
        *(undefined4 *)PTR_DAT_0066b2cc = 1;
        *PTR_DAT_0066b6c8 = 1;
        FUN_006220bc(param_1);
      }
      else {
        *(int *)PTR_DAT_0066b09c = iVar5;
        *(undefined4 *)PTR_DAT_0066b2cc = 1;
        *PTR_DAT_0066b6c8 = 0;
        FUN_00622e5c(param_1);
        FUN_0060ef04(param_1);
        FUN_0043b234(DAT_006d4918,0);
        FUN_00618ac8(param_1);
      }
      goto LAB_00622e24;
    }
    iVar5 = iVar5 + 1;
    pcVar4 = pcVar4 + 0x568;
  } while (iVar5 != 0x1b);
  *(int *)(puVar1 + 0x188) = *(int *)(puVar1 + 0x188) + 1;
  if ((*(int *)(puVar1 + 0x188) == 6) && (*(int *)(puVar1 + 0x184) == 1)) {
    *(undefined4 *)(puVar1 + 0x184) = 2;
    *(undefined4 *)(puVar1 + 0x188) = 1;
  }
  cVar3 = FUN_00657370();
  if (cVar3 == '\0') {
    if (PTR_DAT_0066ae98[0x8c55] == '\0') {
      if (PTR_DAT_0066ae98[0x667d] == '\0') {
        if (PTR_DAT_0066ae98[0x3b3d] == '\0') {
          iVar5 = 0;
          pcVar4 = PTR_DAT_0066ae98 + 0x52d;
          do {
            if (*pcVar4 != '\0') {
              *(int *)PTR_DAT_0066b09c = iVar5;
              break;
            }
            iVar5 = iVar5 + 1;
            pcVar4 = pcVar4 + 0x568;
          } while (iVar5 != 0x1b);
        }
        else {
          *(undefined4 *)PTR_DAT_0066b09c = 10;
        }
      }
      else {
        *(undefined4 *)PTR_DAT_0066b09c = 0x12;
      }
    }
    else {
      *(undefined4 *)PTR_DAT_0066b09c = 0x19;
    }
  }
  FUN_0061ab38(param_1);
  FUN_0060ee88(param_1);
LAB_00622e24:
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00622e41;
  puStack_18 = (undefined1 *)0x622e39;
  FUN_00404ff0(&local_8,uStack_1c,puVar2);
  return;
}

