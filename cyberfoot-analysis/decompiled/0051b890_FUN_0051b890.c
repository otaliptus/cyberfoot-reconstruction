// Address: 0051b890
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051b890(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  char local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  piVar8 = (int *)(param_4 + -0x10138);
  puStack_20 = &LAB_0051bbc5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = FUN_0051b5b4(*(undefined4 *)(param_4 + -0x8128),param_2,param_3,param_4);
  do {
    if (iVar2 < 0) goto LAB_0051bbaf;
    if (iVar2 == *(int *)(param_4 + -0x108)) {
      iVar2 = *(int *)(param_4 + -0x108);
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        puVar7 = (undefined4 *)(param_4 + -0xc128);
        piVar5 = (int *)(param_4 + -0x10128);
        do {
          *puVar7 = 0;
          *piVar5 = iVar3;
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
          puVar7 = puVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = *(int *)(param_4 + -0x108);
      if (iVar2 < 0x1000) {
        puVar7 = (undefined4 *)(param_4 + -0xc128 + iVar2 * 4);
        puVar6 = (undefined4 *)(param_4 + -0x10128 + iVar2 * 4);
        do {
          *puVar7 = 0;
          *puVar6 = 0;
          iVar2 = iVar2 + 1;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar2 != 0x1000);
      }
      *(uint *)(param_4 + -0x8128) = *(byte *)(param_4 + -0x10129) + 1;
      *(int *)(param_4 + -0x10130) = *(int *)(param_4 + -0x108) * 2;
      *(int *)(param_4 + -0x10134) = *(int *)(param_4 + -0x108) + 2;
      *piVar8 = param_4 + -0x8124;
      do {
        uVar4 = FUN_0051b5b4(*(undefined4 *)(param_4 + -0x8128));
        *(undefined4 *)(param_4 + -0x1013c) = uVar4;
        *(undefined4 *)(param_4 + -0x10140) = *(undefined4 *)(param_4 + -0x1013c);
      } while (*(int *)(param_4 + -0x1013c) == *(int *)(param_4 + -0x108));
      goto LAB_0051bbaf;
    }
    if (iVar2 == *(int *)(param_4 + -0x10144)) {
      if (((*(char *)(param_4 + -0x121) != '\0') ||
          (iVar2 = (**(code **)(**(int **)(param_4 + -0x120) + 0xc))
                             (*(int **)(param_4 + -0x120),&local_5,1), iVar2 != 1)) ||
         (local_5 == '\0')) goto LAB_0051bbaf;
      goto LAB_0051ba2c;
    }
    iVar3 = iVar2;
    if (*(int *)(param_4 + -0x10134) <= iVar2) {
      *(undefined4 *)*piVar8 = *(undefined4 *)(param_4 + -0x1013c);
      *piVar8 = *piVar8 + 4;
      iVar3 = *(int *)(param_4 + -0x10140);
    }
    if (*(int *)(param_4 + -0x108) <= iVar3) {
      do {
        *(undefined4 *)*piVar8 = *(undefined4 *)(param_4 + -0x10128 + iVar3 * 4);
        *piVar8 = *piVar8 + 4;
        if (iVar3 == *(int *)(param_4 + -0xc128 + iVar3 * 4)) {
          FUN_00406d44(&PTR_DAT_005166ac,&local_c);
          FUN_00516934(local_c);
        }
        iVar3 = *(int *)(param_4 + -0xc128 + iVar3 * 4);
      } while (*(int *)(param_4 + -0x108) <= iVar3);
    }
    *(undefined4 *)(param_4 + -0x1013c) = *(undefined4 *)(param_4 + -0x10128 + iVar3 * 4);
    *(undefined4 *)*piVar8 = *(undefined4 *)(param_4 + -0x1013c);
    *piVar8 = *piVar8 + 4;
    iVar3 = *(int *)(param_4 + -0x10134);
    if (iVar3 < 0x1000) {
      *(undefined4 *)(param_4 + -0xc128 + iVar3 * 4) = *(undefined4 *)(param_4 + -0x10140);
      *(undefined4 *)(param_4 + -0x10128 + iVar3 * 4) = *(undefined4 *)(param_4 + -0x1013c);
      *(int *)(param_4 + -0x10134) = *(int *)(param_4 + -0x10134) + 1;
      if ((*(int *)(param_4 + -0x10130) <= *(int *)(param_4 + -0x10134)) &&
         (*(int *)(param_4 + -0x10130) < 0x1000)) {
        *(int *)(param_4 + -0x10130) = *(int *)(param_4 + -0x10130) * 2;
        *(int *)(param_4 + -0x8128) = *(int *)(param_4 + -0x8128) + 1;
      }
    }
    *(int *)(param_4 + -0x10140) = iVar2;
    iVar2 = iVar3;
  } while (*piVar8 <= param_4 + -0x8124);
  *piVar8 = *piVar8 + -4;
  goto LAB_0051bbaf;
  while (local_5 != '\0') {
LAB_0051ba2c:
    (**(code **)(**(int **)(param_4 + -0x120) + 0x14))(*(int **)(param_4 + -0x120),local_5,1);
    iVar2 = (**(code **)(**(int **)(param_4 + -0x120) + 0xc))
                      (*(int **)(param_4 + -0x120),&local_5,1);
    if (iVar2 != 1) break;
  }
LAB_0051bbaf:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0051bbcc;
  puStack_20 = (undefined1 *)0x51bbc4;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

