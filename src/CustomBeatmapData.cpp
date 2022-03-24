#include "CustomBeatmapData.h"

#include "GlobalNamespace/BeatmapDataSortedListForTypes_1.hpp"
#include "GlobalNamespace/ISortedList_1.hpp"

using namespace GlobalNamespace;

DEFINE_TYPE(CustomJSONData, CustomBeatmapData);
DEFINE_TYPE(CustomJSONData, CustomBeatmapEventData);
DEFINE_TYPE(CustomJSONData, CustomObstacleData);
DEFINE_TYPE(CustomJSONData, CustomNoteData);
DEFINE_TYPE(CustomJSONData, CustomWaypointData);
DEFINE_TYPE(CustomJSONData, CustomSliderData);

void CustomJSONData::CustomBeatmapData::ctor(int numberOfLines) {
    static auto* ctor = il2cpp_utils::FindMethodUnsafe("", "BeatmapData", ".ctor", 1);
    CRASH_UNLESS(il2cpp_utils::RunMethod(this, ctor, numberOfLines));
    INVOKE_CTOR();
}


System::Type *CustomJSONData::CustomBeatmapData::GetCustomType(Il2CppObject *obj) {
    static auto CustomKlass = classof(CustomBeatmapData*);

    if (obj && std::string_view(obj->klass->namespaze) == std::string_view(CustomKlass->namespaze)) {
        return il2cpp_utils::GetSystemType(obj->klass->parent);
    }

    return il2cpp_utils::GetSystemType(obj->klass);
}

void CustomJSONData::CustomBeatmapData::InsertCustomEventData(CustomJSONData::CustomEventData* customEventData) {
    beatmapDataItemsPerType->InsertItem(customEventData);
    allBeatmapData->Insert((BeatmapDataItem *) customEventData);
}

CustomJSONData::CustomBeatmapData *CustomJSONData::CustomBeatmapData::BaseCopy() {
    auto copy = CustomJSONData::CustomBeatmapData::New_ctor(numberOfLines);

    // copy the rest
    copy->doc = this->doc;
    copy->customData = customData;
    copy->beatmapCustomData = beatmapCustomData;
    copy->levelCustomData = levelCustomData;

    return copy;
}

void CustomJSONData::CustomBeatmapEventData::ctor(float time, GlobalNamespace::BasicBeatmapEventType type, int value, float floatValue) {
    static auto BeatmapEventData_Ctor = CRASH_UNLESS(il2cpp_utils::FindMethodUnsafe(classof(BeatmapEventData*), ".ctor", 4));
    BeatmapEventData* instance = this;
    il2cpp_utils::RunMethodRethrow<void, false>(instance, BeatmapEventData_Ctor, time, type, value, floatValue);
    INVOKE_CTOR();
}

CustomJSONData::CustomBeatmapEventData *CustomJSONData::CustomBeatmapEventData::GetCopy() {
    auto copy = CustomJSONData::CustomBeatmapEventData::New_ctor(this->time, (int) type, value, floatValue);
    copy->customData = this->customData;
    return copy;
}


void CustomJSONData::CustomObstacleData::ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float duration, int width, int height) {
    static auto NoteData_Ctor = CRASH_UNLESS(il2cpp_utils::FindMethodUnsafe(classof(ObstacleData*), ".ctor", 6));
    ObstacleData* instance = this;
    il2cpp_utils::RunMethodThrow<void, false>(instance, NoteData_Ctor, time, lineIndex, lineLayer, duration, width, height);
    INVOKE_CTOR();
}

CustomJSONData::CustomObstacleData *CustomJSONData::CustomObstacleData::GetCopy() {
    auto copy = CustomJSONData::CustomObstacleData::New_ctor(this->time, this->lineIndex, this->lineLayer, this->duration, this->width, height);
    copy->customData = this->customData;
    copy->bpm = this->bpm;
    return copy;
}


void CustomJSONData::CustomSliderData::ctor(GlobalNamespace::SliderData::Type sliderType,
                                            ::GlobalNamespace::ColorType colorType, bool hasHeadNote, float headTime,
                                            int headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                            ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer,
                                            float headControlPointLengthMultiplier,
                                            ::GlobalNamespace::NoteCutDirection headCutDirection,
                                            float headCutDirectionAngleOffset, bool hasTailNote, float tailTime,
                                            int tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer,
                                            ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer,
                                            float tailControlPointLengthMultiplier,
                                            ::GlobalNamespace::NoteCutDirection tailCutDirection,
                                            float tailCutDirectionAngleOffset,
                                            ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int sliceCount,
                                            float squishAmount) {
    static auto NoteData_Ctor = CRASH_UNLESS(il2cpp_utils::FindMethodUnsafe(classof(SliderData*), ".ctor", 21));
    CustomSliderData* instance = this;
    il2cpp_utils::RunMethodThrow<void, false>(instance, NoteData_Ctor, sliderType, colorType, hasHeadNote, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection,
                                              headCutDirectionAngleOffset, hasTailNote, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier,
                                              tailCutDirection, tailCutDirectionAngleOffset, midAnchorMode, sliceCount, squishAmount);
    INVOKE_CTOR();
}


CustomJSONData::CustomSliderData *CustomJSONData::CustomSliderData::GetCopy() {
    auto copy = CustomJSONData::CustomSliderData::New_ctor(sliderType, colorType, hasHeadNote, time, headLineIndex, headLineLayer, headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection,
                                                           headCutDirectionAngleOffset, hasTailNote, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier,
                                                           tailCutDirection, tailCutDirectionAngleOffset, midAnchorMode, sliceCount, squishAmount);
    copy->customData = this->customData;
    copy->bpm = this->bpm;
    return copy;
}


void CustomJSONData::CustomNoteData::ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                          ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::NoteData::GameplayType gameplayType,
                                          ::GlobalNamespace::NoteData::ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                                          ::GlobalNamespace::NoteCutDirection cutDirection, float timeToNextColorNote, float timeToPrevColorNote,
                                          int flipLineIndex, float flipYSide, float cutDirectionAngleOffset, float cutSfxVolumeMultiplier
                                          ) {
    static auto NoteData_Ctor = CRASH_UNLESS(il2cpp_utils::FindMethodUnsafe(classof(NoteData*), ".ctor", 14));
    NoteData* instance = this;
    il2cpp_utils::RunMethodRethrow<void, false>(instance, NoteData_Ctor, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType,
                                                scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex,
                                                flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
    INVOKE_CTOR();
}

CustomJSONData::CustomNoteData *CustomJSONData::CustomNoteData::GetCopy() {
    auto copy = CustomJSONData::CustomNoteData::New_ctor(time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType,
                                                         colorType, cutDirection, timeToNextColorNote,
                                                         timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
    copy->customData = this->customData;
    copy->bpm = this->bpm;
    return copy;
}



void CustomJSONData::CustomWaypointData::ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::OffsetDirection offsetDirection) {
    static auto NoteData_Ctor = CRASH_UNLESS(il2cpp_utils::FindMethodUnsafe(classof(WaypointData*), ".ctor", 4));
    WaypointData* instance = this;
    il2cpp_utils::RunMethodRethrow<void, false>(instance, NoteData_Ctor, time, lineIndex, noteLineLayer, offsetDirection);
    INVOKE_CTOR();
}

CustomJSONData::CustomWaypointData *CustomJSONData::CustomWaypointData::GetCopy() {
    auto copy = CRASH_UNLESS(il2cpp_utils::New<CustomJSONData::CustomWaypointData*>(time, lineIndex, lineLayer, offsetDirection));
    copy->bpm = this->bpm;
    return copy;
}