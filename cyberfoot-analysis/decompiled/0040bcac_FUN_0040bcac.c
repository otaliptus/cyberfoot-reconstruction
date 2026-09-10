// Address: 0040bcac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040bcac(char *param_1,float10 *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 uVar6;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined2 extraout_var_00;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar7;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar9;
  int extraout_EDX_01;
  ushort in_FPUStatusWord;
  ushort uVar10;
  float10 fVar11;
  
  cVar2 = DAT_0066c68b;
  uVar10 = (in_FPUStatusWord >> 8 & 0x7f) << 8;
  fVar11 = (float10)0;
  FUN_0040bd63();
  cVar1 = *param_1;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    param_1 = param_1 + 1;
  }
  uVar3 = FUN_0040bd6e();
  uVar8 = 0;
  uVar6 = (undefined3)((uint)uVar3 >> 8);
  pcVar7 = extraout_ECX;
  if (*param_1 == cVar2) {
    param_1 = param_1 + 1;
    FUN_0040bd6e();
    uVar8 = -extraout_EDX;
    pcVar7 = extraout_ECX_00;
    uVar6 = extraout_var;
  }
  if (pcVar7 != param_1) {
    uVar4 = CONCAT31(uVar6,*param_1) & 0xffffffdf;
    uVar9 = uVar8;
    if ((char)uVar4 == 'E') {
      param_1 = param_1 + 1;
      FUN_0040bd8a();
      uVar9 = extraout_EDX_00 + uVar8;
      uVar4 = uVar8;
    }
    FUN_0040bd63(uVar4,uVar9);
    if (*param_1 == '\0') {
      iVar5 = extraout_EDX_01;
      if (param_3 == '\x01') {
        iVar5 = extraout_EDX_01 + 4;
      }
      thunk_FUN_004035d8(iVar5);
      if (cVar1 == '-') {
        fVar11 = -fVar11;
      }
      if (param_3 == '\0') {
        *param_2 = fVar11;
      }
      else {
        *(longlong *)param_2 = (longlong)ROUND(fVar11);
      }
      if ((uVar10 & 9) == 0) {
        uVar3 = CONCAT31((int3)(CONCAT22(extraout_var_00,uVar10) >> 8),1);
        goto LAB_0040bd5a;
      }
    }
  }
  uVar3 = 0;
LAB_0040bd5a:
  FUN_0040bdb9(uVar3);
  return;
}

