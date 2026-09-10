// Address: 004f1068
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f1068(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  WPARAM WVar6;
  HWND pHVar7;
  int iVar8;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffc8;
  UINT UVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  LPARAM LVar12;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  
  local_20 = &stack0xfffffffc;
  iVar8 = 6;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_24 = &LAB_004f133e;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  iVar8 = FUN_00404ba4(*param_2);
  if (iVar8 == 0) {
    FUN_004f0798(param_1,0xffffffff);
    FUN_00403c80(param_1);
  }
  else {
    local_10 = (**(code **)(**(int **)(param_1 + 0x2b4) + 0x14))();
    iVar8 = unaff_ESI;
    if (-1 < local_10 + -1) {
      iVar8 = 0;
      do {
        if (*(char *)(param_1 + 0x298) == '\x02') {
          FUN_004f06a4(param_1,iVar8,&stack0xffffffec);
          cVar2 = FUN_0043ccd0(*param_2,unaff_EBX);
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x2b4) + 0xc))
                    (*(int **)(param_1 + 0x2b4),iVar8,&stack0xffffffe8);
          cVar2 = FUN_0043ccd0(*param_2,unaff_ESI);
        }
        if (cVar2 != '\0') break;
        iVar8 = iVar8 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2b4) + 0x14))();
    if (iVar3 <= iVar8) {
      iVar8 = -1;
    }
    if (iVar8 != -1) {
      iVar3 = *(int *)(param_1 + 0x2b0);
      FUN_004f0798(param_1,iVar8);
      if (*(char *)(param_1 + 0x298) == '\0') {
        (**(code **)(**(int **)(param_1 + 0x2b4) + 0xc))
                  (*(int **)(param_1 + 0x2b4),iVar8,&stack0xffffffe4);
        uVar4 = FUN_00404ba4(*param_2);
        FUN_00404e04(unaff_EDI,1,uVar4);
        if (*(char *)(param_1 + 0x27a) == '\0') {
          (**(code **)(**(int **)(param_1 + 0x2b4) + 0xc))
                    (*(int **)(param_1 + 0x2b4),iVar8,&local_28);
          uVar4 = local_28;
          iVar5 = FUN_00404ba4(*param_2);
          FUN_00404e04(uVar4,iVar5 + 1,0x7fffffff);
          FUN_00404bf0(&local_20,*param_2,local_24);
          FUN_00466238(param_1,local_20);
          LVar12 = 0x7fffffff;
          WVar6 = FUN_00404ba4(*param_2);
          UVar9 = 0xb1;
          pHVar7 = (HWND)FUN_0046cae0(param_1);
          SendMessageA(pHVar7,UVar9,WVar6,LVar12);
        }
        else {
          FUN_004f0798(param_1,iVar8);
          FUN_00404928(param_1 + 0x2d0,*param_2);
        }
      }
      else if (*(char *)(param_1 + 0x298) == '\x02') {
        puVar10 = param_2;
        FUN_004f06a4(param_1,iVar8,&stack0xffffffd4);
        uVar4 = FUN_00404ba4(*param_2);
        FUN_00404e04(puVar10,1,uVar4);
        if (*(char *)(param_1 + 0x27a) == '\0') {
          FUN_004f06a4(param_1,iVar8,&stack0xffffffc8);
          uVar4 = 0x4f1288;
          iVar5 = FUN_00404ba4(*param_2);
          uVar11 = 0x4f1296;
          FUN_00404e04(in_stack_ffffffc8,iVar5 + 1,0x7fffffff);
          FUN_00404bf0(&stack0xffffffd0,*param_2,uVar4);
          FUN_00466238(param_1,uVar11);
          LVar12 = 0x7fffffff;
          WVar6 = FUN_00404ba4(*param_2);
          UVar9 = 0xb1;
          pHVar7 = (HWND)FUN_0046cae0(param_1);
          SendMessageA(pHVar7,UVar9,WVar6,LVar12);
        }
        else {
          FUN_004f0798(param_1,iVar8);
          FUN_00404928(param_1 + 0x2d0,*param_2);
        }
      }
      if (iVar8 != iVar3) {
        FUN_00403c80(param_1);
        if (*(short *)(param_1 + 0x28a) == 0) {
          FUN_00403c80(param_1);
        }
        else {
          (**(code **)(param_1 + 0x288))(*(undefined4 *)(param_1 + 0x28c),param_1);
        }
      }
    }
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_004f1345;
  local_24 = (undefined1 *)0x4f133d;
  FUN_004048f8(&stack0xffffffc8,10,puVar1);
  return;
}

