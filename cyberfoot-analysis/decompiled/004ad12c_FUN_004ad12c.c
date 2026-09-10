// Address: 004ad12c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Unable to track spacebase fully for stack */

void FUN_004ad12c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  LCID LVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar7 = (param_3 + 1) * -4;
  puVar3 = &stack0xffffffd4 + iVar7;
  do {
    puVar8 = puVar3;
    *(undefined4 *)(puVar8 + -4) = 0x4ad15b;
    iVar4 = FUN_0040a760(param_2);
    *(undefined4 *)(puVar8 + -4) = 0;
    *(undefined4 *)(puVar8 + -8) = 0;
    *(int *)(puVar8 + -0xc) = iVar4;
    *(int *)(puVar8 + -0x10) = param_2;
    *(undefined4 *)(puVar8 + -0x14) = 0;
    *(undefined4 *)(puVar8 + -0x18) = 0;
    *(undefined4 *)(puVar8 + -0x1c) = 0x4ad16c;
    iVar5 = MultiByteToWideChar(*(UINT *)(puVar8 + -0x18),*(DWORD *)(puVar8 + -0x14),
                                *(LPCSTR *)(puVar8 + -0x10),*(int *)(puVar8 + -0xc),
                                *(LPWSTR *)(puVar8 + -8),*(int *)(puVar8 + -4));
    iVar5 = iVar5 + 1;
    iVar2 = -(iVar5 * 2 + 3U & 0xfffffffc);
    if (iVar10 == 0) {
      *(int *)(&stack0xffffffd4 + iVar7) = (int)puVar8 + iVar2;
    }
    else {
      *(int *)(&stack0xffffffd4 + (param_3 - iVar10) * 4 + iVar7) = (int)puVar8 + iVar2;
    }
    *(int *)(puVar8 + iVar2 + -4) = iVar5;
    *(int *)(puVar8 + iVar2 + -8) = (int)puVar8 + iVar2;
    *(int *)(puVar8 + iVar2 + -0xc) = iVar4;
    *(int *)(puVar8 + iVar2 + -0x10) = param_2;
    *(undefined4 *)(puVar8 + iVar2 + -0x14) = 0;
    *(undefined4 *)(puVar8 + iVar2 + -0x18) = 0;
    *(undefined4 *)(puVar8 + iVar2 + -0x1c) = 0x4ad1b1;
    MultiByteToWideChar(*(UINT *)(puVar8 + iVar2 + -0x18),*(DWORD *)(puVar8 + iVar2 + -0x14),
                        *(LPCSTR *)(puVar8 + iVar2 + -0x10),*(int *)(puVar8 + iVar2 + -0xc),
                        *(LPWSTR *)(puVar8 + iVar2 + -8),*(int *)(puVar8 + iVar2 + -4));
    *(undefined2 *)(puVar8 + iVar5 * 2 + iVar2 + -2) = 0;
    param_2 = param_2 + iVar4 + 1;
    iVar10 = iVar10 + 1;
    puVar3 = puVar8 + iVar2;
  } while (iVar10 != param_3);
  *(undefined4 *)(puVar8 + iVar2 + -4) = param_4;
  *(undefined4 *)(puVar8 + iVar2 + -8) = 0x4ad1d0;
  LVar6 = GetThreadLocale();
  *(LCID *)(puVar8 + iVar2 + -8) = LVar6;
  *(int *)(puVar8 + iVar2 + -0xc) = param_3;
  *(undefined1 **)(puVar8 + iVar2 + -0x10) = &stack0xffffffd4 + iVar7;
  *(undefined **)(puVar8 + iVar2 + -0x14) = PTR_DAT_0066ad5c;
  *(int **)(puVar8 + iVar2 + -0x18) = param_1;
  pcVar1 = *(code **)(*param_1 + 0x14);
  puVar9 = puVar8 + iVar2 + -0x1c;
  *(undefined4 *)(puVar8 + iVar2 + -0x1c) = 0x4ad1e8;
  iVar7 = (*pcVar1)();
  if (iVar7 == -0x7ffdfffa) {
    *(undefined1 **)(puVar9 + -4) = &stack0xfffffffc;
    *(undefined4 *)(puVar9 + -8) = 0x4ad1f5;
    FUN_004ad0f8();
  }
  else {
    *(undefined4 *)(puVar9 + -4) = 0x4ad1fd;
    FUN_004ac7a4();
  }
  return;
}

